﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSource.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DeleteArtifactRequest : public SageMakerRequest
  {
  public:
    DeleteArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteArtifact"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArnHasBeenSet = true; m_artifactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline void SetArtifactArn(const char* value) { m_artifactArnHasBeenSet = true; m_artifactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline DeleteArtifactRequest& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline DeleteArtifactRequest& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline DeleteArtifactRequest& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}


    /**
     * <p>The URI of the source.</p>
     */
    inline const ArtifactSource& GetSource() const{ return m_source; }

    /**
     * <p>The URI of the source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSource(const ArtifactSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSource(ArtifactSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The URI of the source.</p>
     */
    inline DeleteArtifactRequest& WithSource(const ArtifactSource& value) { SetSource(value); return *this;}

    /**
     * <p>The URI of the source.</p>
     */
    inline DeleteArtifactRequest& WithSource(ArtifactSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_artifactArn;
    bool m_artifactArnHasBeenSet;

    ArtifactSource m_source;
    bool m_sourceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
