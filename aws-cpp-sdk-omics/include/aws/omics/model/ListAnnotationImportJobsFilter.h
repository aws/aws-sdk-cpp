/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/JobStatus.h>
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
   * <p>A filter for annotation import jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationImportJobsFilter">AWS
   * API Reference</a></p>
   */
  class ListAnnotationImportJobsFilter
  {
  public:
    AWS_OMICS_API ListAnnotationImportJobsFilter();
    AWS_OMICS_API ListAnnotationImportJobsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ListAnnotationImportJobsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A status to filter on.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status to filter on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status to filter on.</p>
     */
    inline ListAnnotationImportJobsFilter& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status to filter on.</p>
     */
    inline ListAnnotationImportJobsFilter& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A store name to filter on.</p>
     */
    inline const Aws::String& GetStoreName() const{ return m_storeName; }

    /**
     * <p>A store name to filter on.</p>
     */
    inline bool StoreNameHasBeenSet() const { return m_storeNameHasBeenSet; }

    /**
     * <p>A store name to filter on.</p>
     */
    inline void SetStoreName(const Aws::String& value) { m_storeNameHasBeenSet = true; m_storeName = value; }

    /**
     * <p>A store name to filter on.</p>
     */
    inline void SetStoreName(Aws::String&& value) { m_storeNameHasBeenSet = true; m_storeName = std::move(value); }

    /**
     * <p>A store name to filter on.</p>
     */
    inline void SetStoreName(const char* value) { m_storeNameHasBeenSet = true; m_storeName.assign(value); }

    /**
     * <p>A store name to filter on.</p>
     */
    inline ListAnnotationImportJobsFilter& WithStoreName(const Aws::String& value) { SetStoreName(value); return *this;}

    /**
     * <p>A store name to filter on.</p>
     */
    inline ListAnnotationImportJobsFilter& WithStoreName(Aws::String&& value) { SetStoreName(std::move(value)); return *this;}

    /**
     * <p>A store name to filter on.</p>
     */
    inline ListAnnotationImportJobsFilter& WithStoreName(const char* value) { SetStoreName(value); return *this;}

  private:

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_storeName;
    bool m_storeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
