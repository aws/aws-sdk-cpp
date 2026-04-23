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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FecOutputIncludeFec.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Fec Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FecOutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FecOutputSettings
  {
  public:
    FecOutputSettings();
    FecOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    FecOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Parameter D from SMPTE 2022-1. The height of the FEC protection matrix.  The
     * number of transport stream packets per column error correction packet. Must be
     * between 4 and 20, inclusive.
     */
    inline int GetColumnDepth() const{ return m_columnDepth; }

    /**
     * Parameter D from SMPTE 2022-1. The height of the FEC protection matrix.  The
     * number of transport stream packets per column error correction packet. Must be
     * between 4 and 20, inclusive.
     */
    inline bool ColumnDepthHasBeenSet() const { return m_columnDepthHasBeenSet; }

    /**
     * Parameter D from SMPTE 2022-1. The height of the FEC protection matrix.  The
     * number of transport stream packets per column error correction packet. Must be
     * between 4 and 20, inclusive.
     */
    inline void SetColumnDepth(int value) { m_columnDepthHasBeenSet = true; m_columnDepth = value; }

    /**
     * Parameter D from SMPTE 2022-1. The height of the FEC protection matrix.  The
     * number of transport stream packets per column error correction packet. Must be
     * between 4 and 20, inclusive.
     */
    inline FecOutputSettings& WithColumnDepth(int value) { SetColumnDepth(value); return *this;}


    /**
     * Enables column only or column and row based FEC
     */
    inline const FecOutputIncludeFec& GetIncludeFec() const{ return m_includeFec; }

    /**
     * Enables column only or column and row based FEC
     */
    inline bool IncludeFecHasBeenSet() const { return m_includeFecHasBeenSet; }

    /**
     * Enables column only or column and row based FEC
     */
    inline void SetIncludeFec(const FecOutputIncludeFec& value) { m_includeFecHasBeenSet = true; m_includeFec = value; }

    /**
     * Enables column only or column and row based FEC
     */
    inline void SetIncludeFec(FecOutputIncludeFec&& value) { m_includeFecHasBeenSet = true; m_includeFec = std::move(value); }

    /**
     * Enables column only or column and row based FEC
     */
    inline FecOutputSettings& WithIncludeFec(const FecOutputIncludeFec& value) { SetIncludeFec(value); return *this;}

    /**
     * Enables column only or column and row based FEC
     */
    inline FecOutputSettings& WithIncludeFec(FecOutputIncludeFec&& value) { SetIncludeFec(std::move(value)); return *this;}


    /**
     * Parameter L from SMPTE 2022-1. The width of the FEC protection matrix.  Must be
     * between 1 and 20, inclusive. If only Column FEC is used, then larger values
     * increase robustness.  If Row FEC is used, then this is the number of transport
     * stream packets per row error correction packet, and the value must be between 4
     * and 20, inclusive, if includeFec is columnAndRow. If includeFec is column, this
     * value must be 1 to 20, inclusive.
     */
    inline int GetRowLength() const{ return m_rowLength; }

    /**
     * Parameter L from SMPTE 2022-1. The width of the FEC protection matrix.  Must be
     * between 1 and 20, inclusive. If only Column FEC is used, then larger values
     * increase robustness.  If Row FEC is used, then this is the number of transport
     * stream packets per row error correction packet, and the value must be between 4
     * and 20, inclusive, if includeFec is columnAndRow. If includeFec is column, this
     * value must be 1 to 20, inclusive.
     */
    inline bool RowLengthHasBeenSet() const { return m_rowLengthHasBeenSet; }

    /**
     * Parameter L from SMPTE 2022-1. The width of the FEC protection matrix.  Must be
     * between 1 and 20, inclusive. If only Column FEC is used, then larger values
     * increase robustness.  If Row FEC is used, then this is the number of transport
     * stream packets per row error correction packet, and the value must be between 4
     * and 20, inclusive, if includeFec is columnAndRow. If includeFec is column, this
     * value must be 1 to 20, inclusive.
     */
    inline void SetRowLength(int value) { m_rowLengthHasBeenSet = true; m_rowLength = value; }

    /**
     * Parameter L from SMPTE 2022-1. The width of the FEC protection matrix.  Must be
     * between 1 and 20, inclusive. If only Column FEC is used, then larger values
     * increase robustness.  If Row FEC is used, then this is the number of transport
     * stream packets per row error correction packet, and the value must be between 4
     * and 20, inclusive, if includeFec is columnAndRow. If includeFec is column, this
     * value must be 1 to 20, inclusive.
     */
    inline FecOutputSettings& WithRowLength(int value) { SetRowLength(value); return *this;}

  private:

    int m_columnDepth;
    bool m_columnDepthHasBeenSet;

    FecOutputIncludeFec m_includeFec;
    bool m_includeFecHasBeenSet;

    int m_rowLength;
    bool m_rowLengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
