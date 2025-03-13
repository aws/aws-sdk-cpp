/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing the additional details to be returned in the
   * <code>AdditionalDetails</code> attribute of
   * <code>PrincipalResourcePermissions</code>.</p> <p>If a catalog resource is
   * shared through Resource Access Manager (RAM), then there will exist a
   * corresponding RAM resource share ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DetailsMap">AWS
   * API Reference</a></p>
   */
  class DetailsMap
  {
  public:
    AWS_LAKEFORMATION_API DetailsMap() = default;
    AWS_LAKEFORMATION_API DetailsMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DetailsMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A resource share ARN for a catalog resource shared through RAM.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShare() const { return m_resourceShare; }
    inline bool ResourceShareHasBeenSet() const { return m_resourceShareHasBeenSet; }
    template<typename ResourceShareT = Aws::Vector<Aws::String>>
    void SetResourceShare(ResourceShareT&& value) { m_resourceShareHasBeenSet = true; m_resourceShare = std::forward<ResourceShareT>(value); }
    template<typename ResourceShareT = Aws::Vector<Aws::String>>
    DetailsMap& WithResourceShare(ResourceShareT&& value) { SetResourceShare(std::forward<ResourceShareT>(value)); return *this;}
    template<typename ResourceShareT = Aws::String>
    DetailsMap& AddResourceShare(ResourceShareT&& value) { m_resourceShareHasBeenSet = true; m_resourceShare.emplace_back(std::forward<ResourceShareT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceShare;
    bool m_resourceShareHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
