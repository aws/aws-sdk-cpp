/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ChangeTypeEnum.h>
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
   * <p>Information about the file operation conflicts in a merge
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeOperations">AWS
   * API Reference</a></p>
   */
  class MergeOperations
  {
  public:
    AWS_CODECOMMIT_API MergeOperations() = default;
    AWS_CODECOMMIT_API MergeOperations(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeOperations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline ChangeTypeEnum GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(ChangeTypeEnum value) { m_sourceHasBeenSet = true; m_source = value; }
    inline MergeOperations& WithSource(ChangeTypeEnum value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline ChangeTypeEnum GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(ChangeTypeEnum value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline MergeOperations& WithDestination(ChangeTypeEnum value) { SetDestination(value); return *this;}
    ///@}
  private:

    ChangeTypeEnum m_source{ChangeTypeEnum::NOT_SET};
    bool m_sourceHasBeenSet = false;

    ChangeTypeEnum m_destination{ChangeTypeEnum::NOT_SET};
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
