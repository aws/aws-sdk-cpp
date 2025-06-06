﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FileModes
  {
  public:
    AWS_CODECOMMIT_API FileModes() = default;
    AWS_CODECOMMIT_API FileModes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileModes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file mode of a file in the source of a merge or pull request.</p>
     */
    inline FileModeTypeEnum GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(FileModeTypeEnum value) { m_sourceHasBeenSet = true; m_source = value; }
    inline FileModes& WithSource(FileModeTypeEnum value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode of a file in the destination of a merge or pull request.</p>
     */
    inline FileModeTypeEnum GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(FileModeTypeEnum value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline FileModes& WithDestination(FileModeTypeEnum value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode of a file in the base of a merge or pull request.</p>
     */
    inline FileModeTypeEnum GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(FileModeTypeEnum value) { m_baseHasBeenSet = true; m_base = value; }
    inline FileModes& WithBase(FileModeTypeEnum value) { SetBase(value); return *this;}
    ///@}
  private:

    FileModeTypeEnum m_source{FileModeTypeEnum::NOT_SET};
    bool m_sourceHasBeenSet = false;

    FileModeTypeEnum m_destination{FileModeTypeEnum::NOT_SET};
    bool m_destinationHasBeenSet = false;

    FileModeTypeEnum m_base{FileModeTypeEnum::NOT_SET};
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
