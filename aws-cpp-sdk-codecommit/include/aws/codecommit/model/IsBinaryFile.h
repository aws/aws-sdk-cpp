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
#include <aws/codecommit/CodeCommit_EXPORTS.h>

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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about whether a file is binary or textual in a merge or pull
   * request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/IsBinaryFile">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API IsBinaryFile
  {
  public:
    IsBinaryFile();
    IsBinaryFile(Aws::Utils::Json::JsonView jsonValue);
    IsBinaryFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The binary or non-binary status of file in the source of a merge or pull
     * request.</p>
     */
    inline bool GetSource() const{ return m_source; }

    /**
     * <p>The binary or non-binary status of file in the source of a merge or pull
     * request.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The binary or non-binary status of file in the source of a merge or pull
     * request.</p>
     */
    inline void SetSource(bool value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The binary or non-binary status of file in the source of a merge or pull
     * request.</p>
     */
    inline IsBinaryFile& WithSource(bool value) { SetSource(value); return *this;}


    /**
     * <p>The binary or non-binary status of a file in the destination of a merge or
     * pull request.</p>
     */
    inline bool GetDestination() const{ return m_destination; }

    /**
     * <p>The binary or non-binary status of a file in the destination of a merge or
     * pull request.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The binary or non-binary status of a file in the destination of a merge or
     * pull request.</p>
     */
    inline void SetDestination(bool value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The binary or non-binary status of a file in the destination of a merge or
     * pull request.</p>
     */
    inline IsBinaryFile& WithDestination(bool value) { SetDestination(value); return *this;}


    /**
     * <p>The binary or non-binary status of a file in the base of a merge or pull
     * request.</p>
     */
    inline bool GetBase() const{ return m_base; }

    /**
     * <p>The binary or non-binary status of a file in the base of a merge or pull
     * request.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The binary or non-binary status of a file in the base of a merge or pull
     * request.</p>
     */
    inline void SetBase(bool value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The binary or non-binary status of a file in the base of a merge or pull
     * request.</p>
     */
    inline IsBinaryFile& WithBase(bool value) { SetBase(value); return *this;}

  private:

    bool m_source;
    bool m_sourceHasBeenSet;

    bool m_destination;
    bool m_destinationHasBeenSet;

    bool m_base;
    bool m_baseHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
