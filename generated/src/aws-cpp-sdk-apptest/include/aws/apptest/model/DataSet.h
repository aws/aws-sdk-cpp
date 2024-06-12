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
    AWS_APPTEST_API DataSet();
    AWS_APPTEST_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the data set.</p>
     */
    inline const DataSetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DataSet& WithType(const DataSetType& value) { SetType(value); return *this;}
    inline DataSet& WithType(DataSetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CCSID of the data set.</p>
     */
    inline const Aws::String& GetCcsid() const{ return m_ccsid; }
    inline bool CcsidHasBeenSet() const { return m_ccsidHasBeenSet; }
    inline void SetCcsid(const Aws::String& value) { m_ccsidHasBeenSet = true; m_ccsid = value; }
    inline void SetCcsid(Aws::String&& value) { m_ccsidHasBeenSet = true; m_ccsid = std::move(value); }
    inline void SetCcsid(const char* value) { m_ccsidHasBeenSet = true; m_ccsid.assign(value); }
    inline DataSet& WithCcsid(const Aws::String& value) { SetCcsid(value); return *this;}
    inline DataSet& WithCcsid(Aws::String&& value) { SetCcsid(std::move(value)); return *this;}
    inline DataSet& WithCcsid(const char* value) { SetCcsid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the data set.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline DataSet& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline DataSet& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the data set.</p>
     */
    inline int GetLength() const{ return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }
    inline DataSet& WithLength(int value) { SetLength(value); return *this;}
    ///@}
  private:

    DataSetType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ccsid;
    bool m_ccsidHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    int m_length;
    bool m_lengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
