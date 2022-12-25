/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class GetWorldTemplateBodyRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API GetWorldTemplateBodyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorldTemplateBody"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline GetWorldTemplateBodyRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline GetWorldTemplateBodyRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline GetWorldTemplateBodyRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline const Aws::String& GetGenerationJob() const{ return m_generationJob; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline bool GenerationJobHasBeenSet() const { return m_generationJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline void SetGenerationJob(const Aws::String& value) { m_generationJobHasBeenSet = true; m_generationJob = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline void SetGenerationJob(Aws::String&& value) { m_generationJobHasBeenSet = true; m_generationJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline void SetGenerationJob(const char* value) { m_generationJobHasBeenSet = true; m_generationJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline GetWorldTemplateBodyRequest& WithGenerationJob(const Aws::String& value) { SetGenerationJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline GetWorldTemplateBodyRequest& WithGenerationJob(Aws::String&& value) { SetGenerationJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline GetWorldTemplateBodyRequest& WithGenerationJob(const char* value) { SetGenerationJob(value); return *this;}

  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::String m_generationJob;
    bool m_generationJobHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
