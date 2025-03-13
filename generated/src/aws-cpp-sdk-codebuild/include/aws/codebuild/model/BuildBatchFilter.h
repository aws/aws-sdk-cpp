/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/StatusType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Specifies filters when retrieving batch builds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildBatchFilter">AWS
   * API Reference</a></p>
   */
  class BuildBatchFilter
  {
  public:
    AWS_CODEBUILD_API BuildBatchFilter() = default;
    AWS_CODEBUILD_API BuildBatchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildBatchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline BuildBatchFilter& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}
  private:

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
