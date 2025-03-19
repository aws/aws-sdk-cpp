/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for a DynamoDB table or index. You
   * can propose a configuration for a new DynamoDB table or index or an existing
   * DynamoDB table or index that you own by specifying the policy for the DynamoDB
   * table or index. For more information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_PutResourcePolicy.html">PutResourcePolicy</a>.</p>
   * <ul> <li> <p>If the configuration is for an existing DynamoDB table or index and
   * you do not specify the DynamoDB policy, then the access preview uses the
   * existing DynamoDB policy for the table or index.</p> </li> <li> <p>If the access
   * preview is for a new resource and you do not specify the policy, then the access
   * preview assumes a DynamoDB table without a policy.</p> </li> <li> <p>To propose
   * deletion of an existing DynamoDB table or index policy, you can specify an empty
   * string for the DynamoDB policy.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DynamodbTableConfiguration">AWS
   * API Reference</a></p>
   */
  class DynamodbTableConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API DynamodbTableConfiguration() = default;
    AWS_ACCESSANALYZER_API DynamodbTableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API DynamodbTableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed resource policy defining who can access or manage the DynamoDB
     * table.</p>
     */
    inline const Aws::String& GetTablePolicy() const { return m_tablePolicy; }
    inline bool TablePolicyHasBeenSet() const { return m_tablePolicyHasBeenSet; }
    template<typename TablePolicyT = Aws::String>
    void SetTablePolicy(TablePolicyT&& value) { m_tablePolicyHasBeenSet = true; m_tablePolicy = std::forward<TablePolicyT>(value); }
    template<typename TablePolicyT = Aws::String>
    DynamodbTableConfiguration& WithTablePolicy(TablePolicyT&& value) { SetTablePolicy(std::forward<TablePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tablePolicy;
    bool m_tablePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
