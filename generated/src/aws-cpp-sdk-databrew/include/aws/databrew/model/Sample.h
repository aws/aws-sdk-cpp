/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/SampleType.h>
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
   * <p>Represents the sample size and sampling type for DataBrew to use for
   * interactive data analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Sample">AWS API
   * Reference</a></p>
   */
  class Sample
  {
  public:
    AWS_GLUEDATABREW_API Sample() = default;
    AWS_GLUEDATABREW_API Sample(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Sample& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of rows in the sample.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline Sample& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way in which DataBrew obtains rows from a dataset.</p>
     */
    inline SampleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SampleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Sample& WithType(SampleType value) { SetType(value); return *this;}
    ///@}
  private:

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    SampleType m_type{SampleType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
