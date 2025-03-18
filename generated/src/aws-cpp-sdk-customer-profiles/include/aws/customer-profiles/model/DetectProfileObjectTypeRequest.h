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
    AWS_CUSTOMERPROFILES_API DetectProfileObjectTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectProfileObjectType"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A string that is serialized from a JSON object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjects() const { return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    template<typename ObjectsT = Aws::Vector<Aws::String>>
    void SetObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects = std::forward<ObjectsT>(value); }
    template<typename ObjectsT = Aws::Vector<Aws::String>>
    DetectProfileObjectTypeRequest& WithObjects(ObjectsT&& value) { SetObjects(std::forward<ObjectsT>(value)); return *this;}
    template<typename ObjectsT = Aws::String>
    DetectProfileObjectTypeRequest& AddObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects.emplace_back(std::forward<ObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DetectProfileObjectTypeRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_objects;
    bool m_objectsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
