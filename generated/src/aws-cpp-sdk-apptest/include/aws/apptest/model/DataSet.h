/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/DataSetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/Format.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Defines a data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DataSet">AWS API
   * Reference</a></p>
   */
  class DataSet
  {
  public:
    AWS_APPTEST_API DataSet() = default;
    AWS_APPTEST_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the data set.</p>
     */
    inline DataSetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSet& WithType(DataSetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CCSID of the data set.</p>
     */
    inline const Aws::String& GetCcsid() const { return m_ccsid; }
    inline bool CcsidHasBeenSet() const { return m_ccsidHasBeenSet; }
    template<typename CcsidT = Aws::String>
    void SetCcsid(CcsidT&& value) { m_ccsidHasBeenSet = true; m_ccsid = std::forward<CcsidT>(value); }
    template<typename CcsidT = Aws::String>
    DataSet& WithCcsid(CcsidT&& value) { SetCcsid(std::forward<CcsidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the data set.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline DataSet& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the data set.</p>
     */
    inline int GetLength() const { return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }
    inline DataSet& WithLength(int value) { SetLength(value); return *this;}
    ///@}
  private:

    DataSetType m_type{DataSetType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ccsid;
    bool m_ccsidHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    int m_length{0};
    bool m_lengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
