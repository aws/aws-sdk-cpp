/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SecurityPolicyType.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>A summary of a security policy for OpenSearch Serverless.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityPolicySummary">AWS
   * API Reference</a></p>
   */
  class SecurityPolicySummary
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicySummary();
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date the policy was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the policy was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date the policy was created.</p>
     */
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date the policy was created.</p>
     */
    inline SecurityPolicySummary& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The description of the security policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the security policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security policy.</p>
     */
    inline SecurityPolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security policy.</p>
     */
    inline SecurityPolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security policy.</p>
     */
    inline SecurityPolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp of when the policy was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The timestamp of when the policy was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The timestamp of when the policy was last modified.</p>
     */
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The timestamp of when the policy was last modified.</p>
     */
    inline SecurityPolicySummary& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline SecurityPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline SecurityPolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline SecurityPolicySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the policy.</p>
     */
    inline const Aws::String& GetPolicyVersion() const{ return m_policyVersion; }

    /**
     * <p>The version of the policy.</p>
     */
    inline bool PolicyVersionHasBeenSet() const { return m_policyVersionHasBeenSet; }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(const Aws::String& value) { m_policyVersionHasBeenSet = true; m_policyVersion = value; }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(Aws::String&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::move(value); }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(const char* value) { m_policyVersionHasBeenSet = true; m_policyVersion.assign(value); }

    /**
     * <p>The version of the policy.</p>
     */
    inline SecurityPolicySummary& WithPolicyVersion(const Aws::String& value) { SetPolicyVersion(value); return *this;}

    /**
     * <p>The version of the policy.</p>
     */
    inline SecurityPolicySummary& WithPolicyVersion(Aws::String&& value) { SetPolicyVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the policy.</p>
     */
    inline SecurityPolicySummary& WithPolicyVersion(const char* value) { SetPolicyVersion(value); return *this;}


    /**
     * <p>The type of security policy.</p>
     */
    inline const SecurityPolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of security policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of security policy.</p>
     */
    inline void SetType(const SecurityPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of security policy.</p>
     */
    inline void SetType(SecurityPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of security policy.</p>
     */
    inline SecurityPolicySummary& WithType(const SecurityPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of security policy.</p>
     */
    inline SecurityPolicySummary& WithType(SecurityPolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    SecurityPolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
