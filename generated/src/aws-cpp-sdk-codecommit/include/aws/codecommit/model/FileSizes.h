/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FileSizes
  {
  public:
    AWS_CODECOMMIT_API FileSizes() = default;
    AWS_CODECOMMIT_API FileSizes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileSizes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of a file in the source of a merge or pull request.</p>
     */
    inline long long GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(long long value) { m_sourceHasBeenSet = true; m_source = value; }
    inline FileSizes& WithSource(long long value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of a file in the destination of a merge or pull request.</p>
     */
    inline long long GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(long long value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline FileSizes& WithDestination(long long value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of a file in the base of a merge or pull request.</p>
     */
    inline long long GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(long long value) { m_baseHasBeenSet = true; m_base = value; }
    inline FileSizes& WithBase(long long value) { SetBase(value); return *this;}
    ///@}
  private:

    long long m_source{0};
    bool m_sourceHasBeenSet = false;

    long long m_destination{0};
    bool m_destinationHasBeenSet = false;

    long long m_base{0};
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
