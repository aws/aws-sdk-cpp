/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class GetCelebrityInfoRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API GetCelebrityInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCelebrityInfo"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline GetCelebrityInfoRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline GetCelebrityInfoRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the celebrity. You get the celebrity ID from a call to the
     * <a>RecognizeCelebrities</a> operation, which recognizes celebrities in an image.
     * </p>
     */
    inline GetCelebrityInfoRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
