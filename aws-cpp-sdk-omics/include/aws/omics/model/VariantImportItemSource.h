/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A imported variant item's source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VariantImportItemSource">AWS
   * API Reference</a></p>
   */
  class VariantImportItemSource
  {
  public:
    AWS_OMICS_API VariantImportItemSource();
    AWS_OMICS_API VariantImportItemSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VariantImportItemSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemSource& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemSource& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemSource& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
