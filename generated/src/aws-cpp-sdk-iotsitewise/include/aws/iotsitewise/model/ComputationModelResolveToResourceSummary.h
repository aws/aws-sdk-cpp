/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ResolveTo.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A summary of the resource that a computation model resolves to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputationModelResolveToResourceSummary">AWS
   * API Reference</a></p>
   */
  class ComputationModelResolveToResourceSummary
  {
  public:
    AWS_IOTSITEWISE_API ComputationModelResolveToResourceSummary() = default;
    AWS_IOTSITEWISE_API ComputationModelResolveToResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ComputationModelResolveToResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    inline bool ResolveToHasBeenSet() const { return m_resolveToHasBeenSet; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    ComputationModelResolveToResourceSummary& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}
  private:

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
