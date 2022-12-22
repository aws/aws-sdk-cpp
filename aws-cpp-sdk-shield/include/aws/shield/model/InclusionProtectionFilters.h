/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectedResourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{

  /**
   * <p>Narrows the set of protections that the call retrieves. You can retrieve a
   * single protection by providing its name or the ARN (Amazon Resource Name) of its
   * protected resource. You can also retrieve all protections for a specific
   * resource type. You can provide up to one criteria per filter type. Shield
   * Advanced returns protections that exactly match all of the filter criteria that
   * you provide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/InclusionProtectionFilters">AWS
   * API Reference</a></p>
   */
  class InclusionProtectionFilters
  {
  public:
    AWS_SHIELD_API InclusionProtectionFilters();
    AWS_SHIELD_API InclusionProtectionFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API InclusionProtectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline InclusionProtectionFilters& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline InclusionProtectionFilters& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline InclusionProtectionFilters& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline InclusionProtectionFilters& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline InclusionProtectionFilters& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectionNames() const{ return m_protectionNames; }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline bool ProtectionNamesHasBeenSet() const { return m_protectionNamesHasBeenSet; }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline void SetProtectionNames(const Aws::Vector<Aws::String>& value) { m_protectionNamesHasBeenSet = true; m_protectionNames = value; }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline void SetProtectionNames(Aws::Vector<Aws::String>&& value) { m_protectionNamesHasBeenSet = true; m_protectionNames = std::move(value); }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& WithProtectionNames(const Aws::Vector<Aws::String>& value) { SetProtectionNames(value); return *this;}

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& WithProtectionNames(Aws::Vector<Aws::String>&& value) { SetProtectionNames(std::move(value)); return *this;}

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& AddProtectionNames(const Aws::String& value) { m_protectionNamesHasBeenSet = true; m_protectionNames.push_back(value); return *this; }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& AddProtectionNames(Aws::String&& value) { m_protectionNamesHasBeenSet = true; m_protectionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& AddProtectionNames(const char* value) { m_protectionNamesHasBeenSet = true; m_protectionNames.push_back(value); return *this; }


    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline const Aws::Vector<ProtectedResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline void SetResourceTypes(const Aws::Vector<ProtectedResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline void SetResourceTypes(Aws::Vector<ProtectedResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& WithResourceTypes(const Aws::Vector<ProtectedResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& WithResourceTypes(Aws::Vector<ProtectedResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& AddResourceTypes(const ProtectedResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline InclusionProtectionFilters& AddResourceTypes(ProtectedResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_protectionNames;
    bool m_protectionNamesHasBeenSet = false;

    Aws::Vector<ProtectedResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
