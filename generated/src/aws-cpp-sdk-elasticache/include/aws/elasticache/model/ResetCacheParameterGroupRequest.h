/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ParameterNameValue.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ResetCacheParameterGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ResetCacheParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class ResetCacheParameterGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ResetCacheParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetCacheParameterGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the cache parameter group to reset.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    ResetCacheParameterGroupRequest& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, all parameters in the cache parameter group are reset
     * to their default values. If <code>false</code>, only the parameters listed by
     * <code>ParameterNameValues</code> are reset to their default values.</p> <p>Valid
     * values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetResetAllParameters() const { return m_resetAllParameters; }
    inline bool ResetAllParametersHasBeenSet() const { return m_resetAllParametersHasBeenSet; }
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }
    inline ResetCacheParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameter names to reset to their default values. If
     * <code>ResetAllParameters</code> is <code>true</code>, do not use
     * <code>ParameterNameValues</code>. If <code>ResetAllParameters</code> is
     * <code>false</code>, you must specify the name of at least one parameter to
     * reset.</p>
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const { return m_parameterNameValues; }
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    void SetParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::forward<ParameterNameValuesT>(value); }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    ResetCacheParameterGroupRequest& WithParameterNameValues(ParameterNameValuesT&& value) { SetParameterNameValues(std::forward<ParameterNameValuesT>(value)); return *this;}
    template<typename ParameterNameValuesT = ParameterNameValue>
    ResetCacheParameterGroupRequest& AddParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.emplace_back(std::forward<ParameterNameValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    bool m_resetAllParameters{false};
    bool m_resetAllParametersHasBeenSet = false;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
