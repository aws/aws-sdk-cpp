/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>Summary of the AWS resource used for access control that is implicitly linked
   * to your AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ProgressUpdateStreamSummary">AWS
   * API Reference</a></p>
   */
  class ProgressUpdateStreamSummary
  {
  public:
    AWS_MIGRATIONHUB_API ProgressUpdateStreamSummary() = default;
    AWS_MIGRATIONHUB_API ProgressUpdateStreamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API ProgressUpdateStreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline const Aws::String& GetProgressUpdateStreamName() const { return m_progressUpdateStreamName; }
    inline bool ProgressUpdateStreamNameHasBeenSet() const { return m_progressUpdateStreamNameHasBeenSet; }
    template<typename ProgressUpdateStreamNameT = Aws::String>
    void SetProgressUpdateStreamName(ProgressUpdateStreamNameT&& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = std::forward<ProgressUpdateStreamNameT>(value); }
    template<typename ProgressUpdateStreamNameT = Aws::String>
    ProgressUpdateStreamSummary& WithProgressUpdateStreamName(ProgressUpdateStreamNameT&& value) { SetProgressUpdateStreamName(std::forward<ProgressUpdateStreamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStreamName;
    bool m_progressUpdateStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
