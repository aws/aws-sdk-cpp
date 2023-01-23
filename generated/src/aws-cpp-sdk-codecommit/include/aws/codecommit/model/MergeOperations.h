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
    AWS_CODECOMMIT_API MergeOperations();
    AWS_CODECOMMIT_API MergeOperations(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeOperations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline const ChangeTypeEnum& GetSource() const{ return m_source; }

    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline void SetSource(const ChangeTypeEnum& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline void SetSource(ChangeTypeEnum&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline MergeOperations& WithSource(const ChangeTypeEnum& value) { SetSource(value); return *this;}

    /**
     * <p>The operation (add, modify, or delete) on a file in the source of a merge or
     * pull request.</p>
     */
    inline MergeOperations& WithSource(ChangeTypeEnum&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline const ChangeTypeEnum& GetDestination() const{ return m_destination; }

    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline void SetDestination(const ChangeTypeEnum& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline void SetDestination(ChangeTypeEnum&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline MergeOperations& WithDestination(const ChangeTypeEnum& value) { SetDestination(value); return *this;}

    /**
     * <p>The operation on a file in the destination of a merge or pull request.</p>
     */
    inline MergeOperations& WithDestination(ChangeTypeEnum&& value) { SetDestination(std::move(value)); return *this;}

  private:

    ChangeTypeEnum m_source;
    bool m_sourceHasBeenSet = false;

    ChangeTypeEnum m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
