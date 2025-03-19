/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The DB instance configuration used for recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/DbInstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class DbInstanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API DbInstanceConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API DbInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API DbInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DB instance class of the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceClass() const { return m_dbInstanceClass; }
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }
    template<typename DbInstanceClassT = Aws::String>
    void SetDbInstanceClass(DbInstanceClassT&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::forward<DbInstanceClassT>(value); }
    template<typename DbInstanceClassT = Aws::String>
    DbInstanceConfiguration& WithDbInstanceClass(DbInstanceClassT&& value) { SetDbInstanceClass(std::forward<DbInstanceClassT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
