/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSourceErrorInfoType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Error information for the data source creation or update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceErrorInfo">AWS
   * API Reference</a></p>
   */
  class DataSourceErrorInfo
  {
  public:
    AWS_QUICKSIGHT_API DataSourceErrorInfo();
    AWS_QUICKSIGHT_API DataSourceErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error type.</p>
     */
    inline const DataSourceErrorInfoType& GetType() const{ return m_type; }

    /**
     * <p>Error type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Error type.</p>
     */
    inline void SetType(const DataSourceErrorInfoType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Error type.</p>
     */
    inline void SetType(DataSourceErrorInfoType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Error type.</p>
     */
    inline DataSourceErrorInfo& WithType(const DataSourceErrorInfoType& value) { SetType(value); return *this;}

    /**
     * <p>Error type.</p>
     */
    inline DataSourceErrorInfo& WithType(DataSourceErrorInfoType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message.</p>
     */
    inline DataSourceErrorInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline DataSourceErrorInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline DataSourceErrorInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    DataSourceErrorInfoType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
