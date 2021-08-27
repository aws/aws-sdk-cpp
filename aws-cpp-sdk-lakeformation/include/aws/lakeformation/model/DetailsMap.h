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
   * shared through AWS Resource Access Manager (AWS RAM), then there will exist a
   * corresponding RAM share resource ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DetailsMap">AWS
   * API Reference</a></p>
   */
  class AWS_LAKEFORMATION_API DetailsMap
  {
  public:
    DetailsMap();
    DetailsMap(Aws::Utils::Json::JsonView jsonValue);
    DetailsMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShare() const{ return m_resourceShare; }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline bool ResourceShareHasBeenSet() const { return m_resourceShareHasBeenSet; }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline void SetResourceShare(const Aws::Vector<Aws::String>& value) { m_resourceShareHasBeenSet = true; m_resourceShare = value; }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline void SetResourceShare(Aws::Vector<Aws::String>&& value) { m_resourceShareHasBeenSet = true; m_resourceShare = std::move(value); }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline DetailsMap& WithResourceShare(const Aws::Vector<Aws::String>& value) { SetResourceShare(value); return *this;}

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline DetailsMap& WithResourceShare(Aws::Vector<Aws::String>&& value) { SetResourceShare(std::move(value)); return *this;}

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline DetailsMap& AddResourceShare(const Aws::String& value) { m_resourceShareHasBeenSet = true; m_resourceShare.push_back(value); return *this; }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline DetailsMap& AddResourceShare(Aws::String&& value) { m_resourceShareHasBeenSet = true; m_resourceShare.push_back(std::move(value)); return *this; }

    /**
     * <p>A share resource ARN for a catalog resource shared through AWS Resource
     * Access Manager (AWS RAM).</p>
     */
    inline DetailsMap& AddResourceShare(const char* value) { m_resourceShareHasBeenSet = true; m_resourceShare.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceShare;
    bool m_resourceShareHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
