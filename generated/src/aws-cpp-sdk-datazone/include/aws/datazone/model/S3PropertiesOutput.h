/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ConnectionStatus.h>
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
   * <p>The Amazon S3 properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/S3PropertiesOutput">AWS
   * API Reference</a></p>
   */
  class S3PropertiesOutput
  {
  public:
    AWS_DATAZONE_API S3PropertiesOutput() = default;
    AWS_DATAZONE_API S3PropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API S3PropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message that gets displayed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    S3PropertiesOutput& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 Access Grant location ID that's part of the Amazon S3
     * properties of a connection.</p>
     */
    inline const Aws::String& GetS3AccessGrantLocationId() const { return m_s3AccessGrantLocationId; }
    inline bool S3AccessGrantLocationIdHasBeenSet() const { return m_s3AccessGrantLocationIdHasBeenSet; }
    template<typename S3AccessGrantLocationIdT = Aws::String>
    void SetS3AccessGrantLocationId(S3AccessGrantLocationIdT&& value) { m_s3AccessGrantLocationIdHasBeenSet = true; m_s3AccessGrantLocationId = std::forward<S3AccessGrantLocationIdT>(value); }
    template<typename S3AccessGrantLocationIdT = Aws::String>
    S3PropertiesOutput& WithS3AccessGrantLocationId(S3AccessGrantLocationIdT&& value) { SetS3AccessGrantLocationId(std::forward<S3AccessGrantLocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI that's part of the Amazon S3 properties of a
     * connection.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3PropertiesOutput& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon S3 connection.</p>
     */
    inline ConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline S3PropertiesOutput& WithStatus(ConnectionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_s3AccessGrantLocationId;
    bool m_s3AccessGrantLocationIdHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    ConnectionStatus m_status{ConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
