/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
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
  class PutProfileObjectRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API PutProfileObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProfileObject"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}


    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline PutProfileObjectRequest& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline PutProfileObjectRequest& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline PutProfileObjectRequest& WithObject(const char* value) { SetObject(value); return *this;}


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
    inline PutProfileObjectRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutProfileObjectRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutProfileObjectRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
