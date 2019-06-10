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
   * <p>Information about the size of files in a merge or pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/FileSizes">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API FileSizes
  {
  public:
    FileSizes();
    FileSizes(Aws::Utils::Json::JsonView jsonValue);
    FileSizes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of a file in the source of a merge or pull request.</p>
     */
    inline long long GetSource() const{ return m_source; }

    /**
     * <p>The size of a file in the source of a merge or pull request.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The size of a file in the source of a merge or pull request.</p>
     */
    inline void SetSource(long long value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The size of a file in the source of a merge or pull request.</p>
     */
    inline FileSizes& WithSource(long long value) { SetSource(value); return *this;}


    /**
     * <p>The size of a file in the destination of a merge or pull request.</p>
     */
    inline long long GetDestination() const{ return m_destination; }

    /**
     * <p>The size of a file in the destination of a merge or pull request.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The size of a file in the destination of a merge or pull request.</p>
     */
    inline void SetDestination(long long value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The size of a file in the destination of a merge or pull request.</p>
     */
    inline FileSizes& WithDestination(long long value) { SetDestination(value); return *this;}


    /**
     * <p>The size of a file in the base of a merge or pull request.</p>
     */
    inline long long GetBase() const{ return m_base; }

    /**
     * <p>The size of a file in the base of a merge or pull request.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The size of a file in the base of a merge or pull request.</p>
     */
    inline void SetBase(long long value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The size of a file in the base of a merge or pull request.</p>
     */
    inline FileSizes& WithBase(long long value) { SetBase(value); return *this;}

  private:

    long long m_source;
    bool m_sourceHasBeenSet;

    long long m_destination;
    bool m_destinationHasBeenSet;

    long long m_base;
    bool m_baseHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
