/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MIGRATIONHUB_API ProgressUpdateStreamSummary
  {
  public:
    ProgressUpdateStreamSummary();
    ProgressUpdateStreamSummary(Aws::Utils::Json::JsonView jsonValue);
    ProgressUpdateStreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStreamName() const{ return m_progressUpdateStreamName; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline bool ProgressUpdateStreamNameHasBeenSet() const { return m_progressUpdateStreamNameHasBeenSet; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStreamName(const Aws::String& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = value; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStreamName(Aws::String&& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStreamName(const char* value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline ProgressUpdateStreamSummary& WithProgressUpdateStreamName(const Aws::String& value) { SetProgressUpdateStreamName(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline ProgressUpdateStreamSummary& WithProgressUpdateStreamName(Aws::String&& value) { SetProgressUpdateStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline ProgressUpdateStreamSummary& WithProgressUpdateStreamName(const char* value) { SetProgressUpdateStreamName(value); return *this;}

  private:

    Aws::String m_progressUpdateStreamName;
    bool m_progressUpdateStreamNameHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
