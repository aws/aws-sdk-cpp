/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RenditionConfigurationRenditionSelection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/RenditionConfigurationRendition.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object that describes which renditions should be recorded for a
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/RenditionConfiguration">AWS
   * API Reference</a></p>
   */
  class RenditionConfiguration
  {
  public:
    AWS_IVS_API RenditionConfiguration();
    AWS_IVS_API RenditionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API RenditionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline const RenditionConfigurationRenditionSelection& GetRenditionSelection() const{ return m_renditionSelection; }

    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline bool RenditionSelectionHasBeenSet() const { return m_renditionSelectionHasBeenSet; }

    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline void SetRenditionSelection(const RenditionConfigurationRenditionSelection& value) { m_renditionSelectionHasBeenSet = true; m_renditionSelection = value; }

    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline void SetRenditionSelection(RenditionConfigurationRenditionSelection&& value) { m_renditionSelectionHasBeenSet = true; m_renditionSelection = std::move(value); }

    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline RenditionConfiguration& WithRenditionSelection(const RenditionConfigurationRenditionSelection& value) { SetRenditionSelection(value); return *this;}

    /**
     * <p>Indicates which set of renditions are recorded for a stream. For
     * <code>BASIC</code> channels, the <code>CUSTOM</code> value has no effect. If
     * <code>CUSTOM</code> is specified, a set of renditions must be specified in the
     * <code>renditions</code> field. Default: <code>ALL</code>.</p>
     */
    inline RenditionConfiguration& WithRenditionSelection(RenditionConfigurationRenditionSelection&& value) { SetRenditionSelection(std::move(value)); return *this;}


    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline const Aws::Vector<RenditionConfigurationRendition>& GetRenditions() const{ return m_renditions; }

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline bool RenditionsHasBeenSet() const { return m_renditionsHasBeenSet; }

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline void SetRenditions(const Aws::Vector<RenditionConfigurationRendition>& value) { m_renditionsHasBeenSet = true; m_renditions = value; }

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline void SetRenditions(Aws::Vector<RenditionConfigurationRendition>&& value) { m_renditionsHasBeenSet = true; m_renditions = std::move(value); }

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline RenditionConfiguration& WithRenditions(const Aws::Vector<RenditionConfigurationRendition>& value) { SetRenditions(value); return *this;}

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline RenditionConfiguration& WithRenditions(Aws::Vector<RenditionConfigurationRendition>&& value) { SetRenditions(std::move(value)); return *this;}

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline RenditionConfiguration& AddRenditions(const RenditionConfigurationRendition& value) { m_renditionsHasBeenSet = true; m_renditions.push_back(value); return *this; }

    /**
     * <p>Indicates which renditions are recorded for a stream, if
     * <code>renditionSelection</code> is <code>CUSTOM</code>; otherwise, this field is
     * irrelevant. The selected renditions are recorded if they are available during
     * the stream. If a selected rendition is unavailable, the best available rendition
     * is recorded. For details on the resolution dimensions of each rendition, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>.</p>
     */
    inline RenditionConfiguration& AddRenditions(RenditionConfigurationRendition&& value) { m_renditionsHasBeenSet = true; m_renditions.push_back(std::move(value)); return *this; }

  private:

    RenditionConfigurationRenditionSelection m_renditionSelection;
    bool m_renditionSelectionHasBeenSet = false;

    Aws::Vector<RenditionConfigurationRendition> m_renditions;
    bool m_renditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
