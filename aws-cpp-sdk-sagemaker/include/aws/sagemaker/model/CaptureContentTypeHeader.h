/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration specifying how to treat different headers. If no headers are
   * specified SageMaker will by default base64 encode when capturing the
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CaptureContentTypeHeader">AWS
   * API Reference</a></p>
   */
  class CaptureContentTypeHeader
  {
  public:
    AWS_SAGEMAKER_API CaptureContentTypeHeader();
    AWS_SAGEMAKER_API CaptureContentTypeHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CaptureContentTypeHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCsvContentTypes() const{ return m_csvContentTypes; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline bool CsvContentTypesHasBeenSet() const { return m_csvContentTypesHasBeenSet; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline void SetCsvContentTypes(const Aws::Vector<Aws::String>& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes = value; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline void SetCsvContentTypes(Aws::Vector<Aws::String>&& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes = std::move(value); }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& WithCsvContentTypes(const Aws::Vector<Aws::String>& value) { SetCsvContentTypes(value); return *this;}

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& WithCsvContentTypes(Aws::Vector<Aws::String>&& value) { SetCsvContentTypes(std::move(value)); return *this;}

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddCsvContentTypes(const Aws::String& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes.push_back(value); return *this; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddCsvContentTypes(Aws::String&& value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as CSV and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddCsvContentTypes(const char* value) { m_csvContentTypesHasBeenSet = true; m_csvContentTypes.push_back(value); return *this; }


    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJsonContentTypes() const{ return m_jsonContentTypes; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline bool JsonContentTypesHasBeenSet() const { return m_jsonContentTypesHasBeenSet; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline void SetJsonContentTypes(const Aws::Vector<Aws::String>& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes = value; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline void SetJsonContentTypes(Aws::Vector<Aws::String>&& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes = std::move(value); }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& WithJsonContentTypes(const Aws::Vector<Aws::String>& value) { SetJsonContentTypes(value); return *this;}

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& WithJsonContentTypes(Aws::Vector<Aws::String>&& value) { SetJsonContentTypes(std::move(value)); return *this;}

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddJsonContentTypes(const Aws::String& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes.push_back(value); return *this; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddJsonContentTypes(Aws::String&& value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of all content type headers that SageMaker will treat as JSON and
     * capture accordingly.</p>
     */
    inline CaptureContentTypeHeader& AddJsonContentTypes(const char* value) { m_jsonContentTypesHasBeenSet = true; m_jsonContentTypes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_csvContentTypes;
    bool m_csvContentTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_jsonContentTypes;
    bool m_jsonContentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
