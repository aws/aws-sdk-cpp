/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters required to enable cold storage for an
   * OpenSearch Service domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cold-storage.html">Cold
   * storage for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ColdStorageOptions">AWS
   * API Reference</a></p>
   */
  class ColdStorageOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API ColdStorageOptions();
    AWS_OPENSEARCHSERVICE_API ColdStorageOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ColdStorageOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable or disable cold storage on the domain.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether to enable or disable cold storage on the domain.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether to enable or disable cold storage on the domain.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether to enable or disable cold storage on the domain.</p>
     */
    inline ColdStorageOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
