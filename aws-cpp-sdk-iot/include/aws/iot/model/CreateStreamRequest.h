﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/StreamFile.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateStreamRequest : public IoTRequest
  {
  public:
    CreateStreamRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStream"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The files to stream.</p>
     */
    inline const Aws::Vector<StreamFile>& GetFiles() const{ return m_files; }

    /**
     * <p>The files to stream.</p>
     */
    inline void SetFiles(const Aws::Vector<StreamFile>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>The files to stream.</p>
     */
    inline void SetFiles(Aws::Vector<StreamFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p>The files to stream.</p>
     */
    inline CreateStreamRequest& WithFiles(const Aws::Vector<StreamFile>& value) { SetFiles(value); return *this;}

    /**
     * <p>The files to stream.</p>
     */
    inline CreateStreamRequest& WithFiles(Aws::Vector<StreamFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>The files to stream.</p>
     */
    inline CreateStreamRequest& AddFiles(const StreamFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p>The files to stream.</p>
     */
    inline CreateStreamRequest& AddFiles(StreamFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline CreateStreamRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline CreateStreamRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that allows the IoT service principal assumes to access your S3
     * files.</p>
     */
    inline CreateStreamRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<StreamFile> m_files;
    bool m_filesHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
