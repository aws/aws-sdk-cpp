/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class DetectProfileObjectTypeRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectProfileObjectType"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjects() const{ return m_objects; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline void SetObjects(const Aws::Vector<Aws::String>& value) { m_objectsHasBeenSet = true; m_objects = value; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline void SetObjects(Aws::Vector<Aws::String>&& value) { m_objectsHasBeenSet = true; m_objects = std::move(value); }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline DetectProfileObjectTypeRequest& WithObjects(const Aws::Vector<Aws::String>& value) { SetObjects(value); return *this;}

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline DetectProfileObjectTypeRequest& WithObjects(Aws::Vector<Aws::String>&& value) { SetObjects(std::move(value)); return *this;}

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline DetectProfileObjectTypeRequest& AddObjects(const Aws::String& value) { m_objectsHasBeenSet = true; m_objects.push_back(value); return *this; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline DetectProfileObjectTypeRequest& AddObjects(Aws::String&& value) { m_objectsHasBeenSet = true; m_objects.push_back(std::move(value)); return *this; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline DetectProfileObjectTypeRequest& AddObjects(const char* value) { m_objectsHasBeenSet = true; m_objects.push_back(value); return *this; }


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline DetectProfileObjectTypeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline DetectProfileObjectTypeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline DetectProfileObjectTypeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_objects;
    bool m_objectsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
