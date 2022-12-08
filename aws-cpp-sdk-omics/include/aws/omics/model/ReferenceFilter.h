/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A filter for references.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceFilter">AWS
   * API Reference</a></p>
   */
  class ReferenceFilter
  {
  public:
    AWS_OMICS_API ReferenceFilter();
    AWS_OMICS_API ReferenceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The filter's start date.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The filter's start date.</p>
     */
    inline ReferenceFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The filter's start date.</p>
     */
    inline ReferenceFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The filter's end date.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The filter's end date.</p>
     */
    inline ReferenceFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The filter's end date.</p>
     */
    inline ReferenceFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline const Aws::String& GetMd5() const{ return m_md5; }

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline bool Md5HasBeenSet() const { return m_md5HasBeenSet; }

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline void SetMd5(const Aws::String& value) { m_md5HasBeenSet = true; m_md5 = value; }

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline void SetMd5(Aws::String&& value) { m_md5HasBeenSet = true; m_md5 = std::move(value); }

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline void SetMd5(const char* value) { m_md5HasBeenSet = true; m_md5.assign(value); }

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline ReferenceFilter& WithMd5(const Aws::String& value) { SetMd5(value); return *this;}

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline ReferenceFilter& WithMd5(Aws::String&& value) { SetMd5(std::move(value)); return *this;}

    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline ReferenceFilter& WithMd5(const char* value) { SetMd5(value); return *this;}


    /**
     * <p>A name to filter on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name to filter on.</p>
     */
    inline ReferenceFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name to filter on.</p>
     */
    inline ReferenceFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name to filter on.</p>
     */
    inline ReferenceFilter& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::String m_md5;
    bool m_md5HasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
