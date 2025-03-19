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
    AWS_GLUEDATABREW_API FilesLimit() = default;
    AWS_GLUEDATABREW_API FilesLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API FilesLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Amazon S3 files to select.</p>
     */
    inline int GetMaxFiles() const { return m_maxFiles; }
    inline bool MaxFilesHasBeenSet() const { return m_maxFilesHasBeenSet; }
    inline void SetMaxFiles(int value) { m_maxFilesHasBeenSet = true; m_maxFiles = value; }
    inline FilesLimit& WithMaxFiles(int value) { SetMaxFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses LAST_MODIFIED_DATE as a sorting criteria. Currently it's the only
     * allowed value.</p>
     */
    inline OrderedBy GetOrderedBy() const { return m_orderedBy; }
    inline bool OrderedByHasBeenSet() const { return m_orderedByHasBeenSet; }
    inline void SetOrderedBy(OrderedBy value) { m_orderedByHasBeenSet = true; m_orderedBy = value; }
    inline FilesLimit& WithOrderedBy(OrderedBy value) { SetOrderedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A criteria to use for Amazon S3 files sorting before their selection. By
     * default uses DESCENDING order, i.e. most recent files are selected first.
     * Another possible value is ASCENDING.</p>
     */
    inline Order GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(Order value) { m_orderHasBeenSet = true; m_order = value; }
    inline FilesLimit& WithOrder(Order value) { SetOrder(value); return *this;}
    ///@}
  private:

    int m_maxFiles{0};
    bool m_maxFilesHasBeenSet = false;

    OrderedBy m_orderedBy{OrderedBy::NOT_SET};
    bool m_orderedByHasBeenSet = false;

    Order m_order{Order::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
