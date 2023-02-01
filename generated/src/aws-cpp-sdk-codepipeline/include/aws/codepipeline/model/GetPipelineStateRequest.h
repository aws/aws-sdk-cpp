/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>GetPipelineState</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineStateInput">AWS
   * API Reference</a></p>
   */
  class GetPipelineStateRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPipelineState"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline GetPipelineStateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline GetPipelineStateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline about which you want to get information.</p>
     */
    inline GetPipelineStateRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
