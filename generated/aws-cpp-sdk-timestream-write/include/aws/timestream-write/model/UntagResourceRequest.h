﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class AWS_TIMESTREAMWRITE_API UntagResourceRequest : public TimestreamWriteRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p> The Timestream resource that the tags will be removed from. This value is an
     * Amazon Resource Name (ARN). </p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of tags keys. Existing tags of the resource whose keys are members of
     * this list will be removed from the Timestream resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
