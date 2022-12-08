/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>Information about the AWS CodeCommit repository to be created in AWS
   * CodeStar. This is where the source code files provided with the project request
   * will be uploaded after project creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CodeCommitCodeDestination">AWS
   * API Reference</a></p>
   */
  class CodeCommitCodeDestination
  {
  public:
    AWS_CODESTAR_API CodeCommitCodeDestination();
    AWS_CODESTAR_API CodeCommitCodeDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API CodeCommitCodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
