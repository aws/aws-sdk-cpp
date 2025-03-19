/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> List of limits that are specific to a given InstanceType and for each of
   * it's <code> <a>InstanceRole</a> </code> . </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdditionalLimit">AWS
   * API Reference</a></p>
   */
  class AdditionalLimit
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AdditionalLimit() = default;
    AWS_ELASTICSEARCHSERVICE_API AdditionalLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdditionalLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of Additional Limit is specific to a given InstanceType and for each of
     * it's <code> <a>InstanceRole</a> </code> etc. <br/> Attributes and their details:
     * <br/> <ul> <li>MaximumNumberOfDataNodesSupported</li> This attribute will be
     * present in Master node only to specify how much data nodes upto which given
     * <code> <a>ESPartitionInstanceType</a> </code> can support as master node.
     * <li>MaximumNumberOfDataNodesWithoutMasterNode</li> This attribute will be
     * present in Data node only to specify how much data nodes of given <code>
     * <a>ESPartitionInstanceType</a> </code> upto which you don't need any master
     * nodes to govern them. </ul> </p>
     */
    inline const Aws::String& GetLimitName() const { return m_limitName; }
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }
    template<typename LimitNameT = Aws::String>
    void SetLimitName(LimitNameT&& value) { m_limitNameHasBeenSet = true; m_limitName = std::forward<LimitNameT>(value); }
    template<typename LimitNameT = Aws::String>
    AdditionalLimit& WithLimitName(LimitNameT&& value) { SetLimitName(std::forward<LimitNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Value for given <code> <a>AdditionalLimit$LimitName</a> </code> . </p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const { return m_limitValues; }
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    void SetLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::forward<LimitValuesT>(value); }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    AdditionalLimit& WithLimitValues(LimitValuesT&& value) { SetLimitValues(std::forward<LimitValuesT>(value)); return *this;}
    template<typename LimitValuesT = Aws::String>
    AdditionalLimit& AddLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues.emplace_back(std::forward<LimitValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_limitName;
    bool m_limitNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_limitValues;
    bool m_limitValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
