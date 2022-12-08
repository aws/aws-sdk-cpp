/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SecurityConfigType.h>
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
   * <p>A summary of a security configuration for OpenSearch
   * Serverless.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityConfigSummary">AWS
   * API Reference</a></p>
   */
  class SecurityConfigSummary
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigSummary();
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the security configuration.</p>
     */
    inline const Aws::String& GetConfigVersion() const{ return m_configVersion; }

    /**
     * <p>The version of the security configuration.</p>
     */
    inline bool ConfigVersionHasBeenSet() const { return m_configVersionHasBeenSet; }

    /**
     * <p>The version of the security configuration.</p>
     */
    inline void SetConfigVersion(const Aws::String& value) { m_configVersionHasBeenSet = true; m_configVersion = value; }

    /**
     * <p>The version of the security configuration.</p>
     */
    inline void SetConfigVersion(Aws::String&& value) { m_configVersionHasBeenSet = true; m_configVersion = std::move(value); }

    /**
     * <p>The version of the security configuration.</p>
     */
    inline void SetConfigVersion(const char* value) { m_configVersionHasBeenSet = true; m_configVersion.assign(value); }

    /**
     * <p>The version of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithConfigVersion(const Aws::String& value) { SetConfigVersion(value); return *this;}

    /**
     * <p>The version of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithConfigVersion(Aws::String&& value) { SetConfigVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithConfigVersion(const char* value) { SetConfigVersion(value); return *this;}


    /**
     * <p>The Epoch time when the security configuration was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The Epoch time when the security configuration was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The Epoch time when the security configuration was created.</p>
     */
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The Epoch time when the security configuration was created.</p>
     */
    inline SecurityConfigSummary& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the security configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline SecurityConfigSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline SecurityConfigSummary& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The type of security configuration.</p>
     */
    inline const SecurityConfigType& GetType() const{ return m_type; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline void SetType(const SecurityConfigType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline void SetType(SecurityConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of security configuration.</p>
     */
    inline SecurityConfigSummary& WithType(const SecurityConfigType& value) { SetType(value); return *this;}

    /**
     * <p>The type of security configuration.</p>
     */
    inline SecurityConfigSummary& WithType(SecurityConfigType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_configVersion;
    bool m_configVersionHasBeenSet = false;

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    SecurityConfigType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
