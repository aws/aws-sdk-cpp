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
#include <aws/codecommit/model/FileModeTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about file modes in a merge or pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/FileModes">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API FileModes
  {
  public:
    FileModes();
    FileModes(Aws::Utils::Json::JsonView jsonValue);
    FileModes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline const FileModeTypeEnum& GetSource() const{ return m_source; }

    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline void SetSource(const FileModeTypeEnum& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline void SetSource(FileModeTypeEnum&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline FileModes& WithSource(const FileModeTypeEnum& value) { SetSource(value); return *this;}

    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline FileModes& WithSource(FileModeTypeEnum&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline const FileModeTypeEnum& GetDestination() const{ return m_destination; }

    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline void SetDestination(const FileModeTypeEnum& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline void SetDestination(FileModeTypeEnum&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline FileModes& WithDestination(const FileModeTypeEnum& value) { SetDestination(value); return *this;}

    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline FileModes& WithDestination(FileModeTypeEnum&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline const FileModeTypeEnum& GetBase() const{ return m_base; }

    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline void SetBase(const FileModeTypeEnum& value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline void SetBase(FileModeTypeEnum&& value) { m_baseHasBeenSet = true; m_base = std::move(value); }

    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline FileModes& WithBase(const FileModeTypeEnum& value) { SetBase(value); return *this;}

    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline FileModes& WithBase(FileModeTypeEnum&& value) { SetBase(std::move(value)); return *this;}

  private:

    FileModeTypeEnum m_source;
    bool m_sourceHasBeenSet;

    FileModeTypeEnum m_destination;
    bool m_destinationHasBeenSet;

    FileModeTypeEnum m_base;
    bool m_baseHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
