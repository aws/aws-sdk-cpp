/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>Details on whether a resource is compliant with the effective tag policy,
   * including information any noncompliant tag keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/ComplianceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails
  {
  public:
    ComplianceDetails();
    ComplianceDetails(Aws::Utils::Json::JsonView jsonValue);
    ComplianceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingKeys() const{ return m_missingKeys; }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline bool MissingKeysHasBeenSet() const { return m_missingKeysHasBeenSet; }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline void SetMissingKeys(const Aws::Vector<Aws::String>& value) { m_missingKeysHasBeenSet = true; m_missingKeys = value; }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline void SetMissingKeys(Aws::Vector<Aws::String>&& value) { m_missingKeysHasBeenSet = true; m_missingKeys = std::move(value); }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline ComplianceDetails& WithMissingKeys(const Aws::Vector<Aws::String>& value) { SetMissingKeys(value); return *this;}

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline ComplianceDetails& WithMissingKeys(Aws::Vector<Aws::String>&& value) { SetMissingKeys(std::move(value)); return *this;}

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline ComplianceDetails& AddMissingKeys(const Aws::String& value) { m_missingKeysHasBeenSet = true; m_missingKeys.push_back(value); return *this; }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline ComplianceDetails& AddMissingKeys(Aws::String&& value) { m_missingKeysHasBeenSet = true; m_missingKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag key that is required by the effective tag policy is missing.</p>
     */
    inline ComplianceDetails& AddMissingKeys(const char* value) { m_missingKeysHasBeenSet = true; m_missingKeys.push_back(value); return *this; }


    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidKeys() const{ return m_invalidKeys; }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline bool InvalidKeysHasBeenSet() const { return m_invalidKeysHasBeenSet; }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline void SetInvalidKeys(const Aws::Vector<Aws::String>& value) { m_invalidKeysHasBeenSet = true; m_invalidKeys = value; }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline void SetInvalidKeys(Aws::Vector<Aws::String>&& value) { m_invalidKeysHasBeenSet = true; m_invalidKeys = std::move(value); }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& WithInvalidKeys(const Aws::Vector<Aws::String>& value) { SetInvalidKeys(value); return *this;}

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& WithInvalidKeys(Aws::Vector<Aws::String>&& value) { SetInvalidKeys(std::move(value)); return *this;}

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidKeys(const Aws::String& value) { m_invalidKeysHasBeenSet = true; m_invalidKeys.push_back(value); return *this; }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidKeys(Aws::String&& value) { m_invalidKeysHasBeenSet = true; m_invalidKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag key is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidKeys(const char* value) { m_invalidKeysHasBeenSet = true; m_invalidKeys.push_back(value); return *this; }


    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidValues() const{ return m_invalidValues; }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline bool InvalidValuesHasBeenSet() const { return m_invalidValuesHasBeenSet; }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline void SetInvalidValues(const Aws::Vector<Aws::String>& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = value; }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline void SetInvalidValues(Aws::Vector<Aws::String>&& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = std::move(value); }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& WithInvalidValues(const Aws::Vector<Aws::String>& value) { SetInvalidValues(value); return *this;}

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& WithInvalidValues(Aws::Vector<Aws::String>&& value) { SetInvalidValues(std::move(value)); return *this;}

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidValues(const Aws::String& value) { m_invalidValuesHasBeenSet = true; m_invalidValues.push_back(value); return *this; }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidValues(Aws::String&& value) { m_invalidValuesHasBeenSet = true; m_invalidValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag value is noncompliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& AddInvalidValues(const char* value) { m_invalidValuesHasBeenSet = true; m_invalidValues.push_back(value); return *this; }


    /**
     * <p>Whether a resource is compliant with the effective tag policy.</p>
     */
    inline bool GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>Whether a resource is compliant with the effective tag policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>Whether a resource is compliant with the effective tag policy.</p>
     */
    inline void SetComplianceStatus(bool value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>Whether a resource is compliant with the effective tag policy.</p>
     */
    inline ComplianceDetails& WithComplianceStatus(bool value) { SetComplianceStatus(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_missingKeys;
    bool m_missingKeysHasBeenSet;

    Aws::Vector<Aws::String> m_invalidKeys;
    bool m_invalidKeysHasBeenSet;

    Aws::Vector<Aws::String> m_invalidValues;
    bool m_invalidValuesHasBeenSet;

    bool m_complianceStatus;
    bool m_complianceStatusHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
