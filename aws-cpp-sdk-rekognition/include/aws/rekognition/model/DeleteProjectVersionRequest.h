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
  class DeleteProjectVersionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DeleteProjectVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProjectVersion"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline DeleteProjectVersionRequest& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline DeleteProjectVersionRequest& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that you want to
     * delete.</p>
     */
    inline DeleteProjectVersionRequest& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
