/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceErrorType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the error message that is returned if the operation cannot be
   * successfully completed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceErrorMessage">AWS
   * API Reference</a></p>
   */
  class DataSourceErrorMessage
  {
  public:
    AWS_DATAZONE_API DataSourceErrorMessage() = default;
    AWS_DATAZONE_API DataSourceErrorMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceErrorMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const Aws::String& GetErrorDetail() const { return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    template<typename ErrorDetailT = Aws::String>
    void SetErrorDetail(ErrorDetailT&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::forward<ErrorDetailT>(value); }
    template<typename ErrorDetailT = Aws::String>
    DataSourceErrorMessage& WithErrorDetail(ErrorDetailT&& value) { SetErrorDetail(std::forward<ErrorDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline DataSourceErrorType GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(DataSourceErrorType value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline DataSourceErrorMessage& WithErrorType(DataSourceErrorType value) { SetErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_errorDetail;
    bool m_errorDetailHasBeenSet = false;

    DataSourceErrorType m_errorType{DataSourceErrorType::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
