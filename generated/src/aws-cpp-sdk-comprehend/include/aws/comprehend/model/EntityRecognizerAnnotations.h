/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Describes the annotations associated with a entity recognizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerAnnotations">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerAnnotations
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerAnnotations() = default;
    AWS_COMPREHEND_API EntityRecognizerAnnotations(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerAnnotations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same Region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    EntityRecognizerAnnotations& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same Region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetTestS3Uri() const { return m_testS3Uri; }
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }
    template<typename TestS3UriT = Aws::String>
    void SetTestS3Uri(TestS3UriT&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::forward<TestS3UriT>(value); }
    template<typename TestS3UriT = Aws::String>
    EntityRecognizerAnnotations& WithTestS3Uri(TestS3UriT&& value) { SetTestS3Uri(std::forward<TestS3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
