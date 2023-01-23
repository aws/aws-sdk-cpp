/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/OrderedBy.h>
#include <aws/databrew/model/Order.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a limit imposed on number of Amazon S3 files that should be
   * selected for a dataset from a connected Amazon S3 path.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/FilesLimit">AWS
   * API Reference</a></p>
   */
  class FilesLimit
  {
  public:
    AWS_GLUEDATABREW_API FilesLimit();
    AWS_GLUEDATABREW_API FilesLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API FilesLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of Amazon S3 files to select.</p>
     */
    inline int GetMaxFiles() const{ return m_maxFiles; }

    /**
     * <p>The number of Amazon S3 files to select.</p>
     */
    inline bool MaxFilesHasBeenSet() const { return m_maxFilesHasBeenSet; }

    /**
     * <p>The number of Amazon S3 files to select.</p>
     */
    inline void SetMaxFiles(int value) { m_maxFilesHasBeenSet = true; m_maxFiles = value; }

    /**
     * <p>The number of Amazon S3 files to select.</p>
     */
    inline FilesLimit& WithMaxFiles(int value) { SetMaxFiles(value); return *this;}


    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline const OrderedBy& GetOrderedBy() const{ return m_orderedBy; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline bool OrderedByHasBeenSet() const { return m_orderedByHasBeenSet; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline void SetOrderedBy(const OrderedBy& value) { m_orderedByHasBeenSet = true; m_orderedBy = value; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline void SetOrderedBy(OrderedBy&& value) { m_orderedByHasBeenSet = true; m_orderedBy = std::move(value); }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline FilesLimit& WithOrderedBy(const OrderedBy& value) { SetOrderedBy(value); return *this;}

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline FilesLimit& WithOrderedBy(OrderedBy&& value) { SetOrderedBy(std::move(value)); return *this;}


    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline FilesLimit& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline FilesLimit& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    int m_maxFiles;
    bool m_maxFilesHasBeenSet = false;

    OrderedBy m_orderedBy;
    bool m_orderedByHasBeenSet = false;

    Order m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
