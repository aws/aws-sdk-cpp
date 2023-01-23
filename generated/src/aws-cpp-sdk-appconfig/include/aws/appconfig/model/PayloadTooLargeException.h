/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/BytesMeasure.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>The configuration size is too large.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/PayloadTooLargeException">AWS
   * API Reference</a></p>
   */
  class PayloadTooLargeException
  {
  public:
    AWS_APPCONFIG_API PayloadTooLargeException();
    AWS_APPCONFIG_API PayloadTooLargeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API PayloadTooLargeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline PayloadTooLargeException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline PayloadTooLargeException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline PayloadTooLargeException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const BytesMeasure& GetMeasure() const{ return m_measure; }

    
    inline bool MeasureHasBeenSet() const { return m_measureHasBeenSet; }

    
    inline void SetMeasure(const BytesMeasure& value) { m_measureHasBeenSet = true; m_measure = value; }

    
    inline void SetMeasure(BytesMeasure&& value) { m_measureHasBeenSet = true; m_measure = std::move(value); }

    
    inline PayloadTooLargeException& WithMeasure(const BytesMeasure& value) { SetMeasure(value); return *this;}

    
    inline PayloadTooLargeException& WithMeasure(BytesMeasure&& value) { SetMeasure(std::move(value)); return *this;}


    
    inline double GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline PayloadTooLargeException& WithLimit(double value) { SetLimit(value); return *this;}


    
    inline double GetSize() const{ return m_size; }

    
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    
    inline void SetSize(double value) { m_sizeHasBeenSet = true; m_size = value; }

    
    inline PayloadTooLargeException& WithSize(double value) { SetSize(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    BytesMeasure m_measure;
    bool m_measureHasBeenSet = false;

    double m_limit;
    bool m_limitHasBeenSet = false;

    double m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
