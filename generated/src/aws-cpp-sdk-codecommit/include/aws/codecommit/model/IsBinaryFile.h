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
   * <p>Information about whether a file is binary or textual in a merge or pull
   * request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/IsBinaryFile">AWS
   * API Reference</a></p>
   */
  class IsBinaryFile
  {
  public:
    AWS_CODECOMMIT_API IsBinaryFile() = default;
    AWS_CODECOMMIT_API IsBinaryFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API IsBinaryFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The binary or non-binary status of file in the source of a merge or pull
     * request.</p>
     */
    inline bool GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(bool value) { m_sourceHasBeenSet = true; m_source = value; }
    inline IsBinaryFile& WithSource(bool value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary or non-binary status of a file in the destination of a merge or
     * pull request.</p>
     */
    inline bool GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(bool value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline IsBinaryFile& WithDestination(bool value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary or non-binary status of a file in the base of a merge or pull
     * request.</p>
     */
    inline bool GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(bool value) { m_baseHasBeenSet = true; m_base = value; }
    inline IsBinaryFile& WithBase(bool value) { SetBase(value); return *this;}
    ///@}
  private:

    bool m_source{false};
    bool m_sourceHasBeenSet = false;

    bool m_destination{false};
    bool m_destinationHasBeenSet = false;

    bool m_base{false};
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
