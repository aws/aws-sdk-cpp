/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information that shows whether a resource is compliant with the effective tag
   * policy, including details on any noncompliant tag keys.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/ComplianceDetails">AWS
   * API Reference</a></p>
   */
  class ComplianceDetails
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails();
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API ComplianceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNoncompliantKeys() const{ return m_noncompliantKeys; }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline bool NoncompliantKeysHasBeenSet() const { return m_noncompliantKeysHasBeenSet; }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline void SetNoncompliantKeys(const Aws::Vector<Aws::String>& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys = value; }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline void SetNoncompliantKeys(Aws::Vector<Aws::String>&& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys = std::move(value); }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline ComplianceDetails& WithNoncompliantKeys(const Aws::Vector<Aws::String>& value) { SetNoncompliantKeys(value); return *this;}

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline ComplianceDetails& WithNoncompliantKeys(Aws::Vector<Aws::String>&& value) { SetNoncompliantKeys(std::move(value)); return *this;}

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline ComplianceDetails& AddNoncompliantKeys(const Aws::String& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys.push_back(value); return *this; }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline ComplianceDetails& AddNoncompliantKeys(Aws::String&& value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>These tag keys on the resource are noncompliant with the effective tag
     * policy.</p>
     */
    inline ComplianceDetails& AddNoncompliantKeys(const char* value) { m_noncompliantKeysHasBeenSet = true; m_noncompliantKeys.push_back(value); return *this; }


    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetKeysWithNoncompliantValues() const{ return m_keysWithNoncompliantValues; }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline bool KeysWithNoncompliantValuesHasBeenSet() const { return m_keysWithNoncompliantValuesHasBeenSet; }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline void SetKeysWithNoncompliantValues(const Aws::Vector<Aws::String>& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues = value; }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline void SetKeysWithNoncompliantValues(Aws::Vector<Aws::String>&& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues = std::move(value); }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline ComplianceDetails& WithKeysWithNoncompliantValues(const Aws::Vector<Aws::String>& value) { SetKeysWithNoncompliantValues(value); return *this;}

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline ComplianceDetails& WithKeysWithNoncompliantValues(Aws::Vector<Aws::String>&& value) { SetKeysWithNoncompliantValues(std::move(value)); return *this;}

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline ComplianceDetails& AddKeysWithNoncompliantValues(const Aws::String& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues.push_back(value); return *this; }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline ComplianceDetails& AddKeysWithNoncompliantValues(Aws::String&& value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues.push_back(std::move(value)); return *this; }

    /**
     * <p>These are keys defined in the effective policy that are on the resource with
     * either incorrect case treatment or noncompliant values. </p>
     */
    inline ComplianceDetails& AddKeysWithNoncompliantValues(const char* value) { m_keysWithNoncompliantValuesHasBeenSet = true; m_keysWithNoncompliantValues.push_back(value); return *this; }


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

    Aws::Vector<Aws::String> m_noncompliantKeys;
    bool m_noncompliantKeysHasBeenSet = false;

    Aws::Vector<Aws::String> m_keysWithNoncompliantValues;
    bool m_keysWithNoncompliantValuesHasBeenSet = false;

    bool m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
