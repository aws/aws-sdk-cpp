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
   * <p>Represents the input of a <code>ModifyCacheParameterGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyCacheParameterGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyCacheParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCacheParameterGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the cache parameter group to modify.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    ModifyCacheParameterGroupRequest& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameter names and values for the parameter update. You must
     * supply at least one parameter name and value; subsequent arguments are optional.
     * A maximum of 20 parameters may be modified per request.</p>
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const { return m_parameterNameValues; }
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    void SetParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::forward<ParameterNameValuesT>(value); }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    ModifyCacheParameterGroupRequest& WithParameterNameValues(ParameterNameValuesT&& value) { SetParameterNameValues(std::forward<ParameterNameValuesT>(value)); return *this;}
    template<typename ParameterNameValuesT = ParameterNameValue>
    ModifyCacheParameterGroupRequest& AddParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.emplace_back(std::forward<ParameterNameValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
