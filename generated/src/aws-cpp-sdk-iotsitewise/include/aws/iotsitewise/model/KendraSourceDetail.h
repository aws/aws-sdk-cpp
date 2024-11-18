/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The source details for the Kendra dataset source.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/KendraSourceDetail">AWS
   * API Reference</a></p>
   */
  class KendraSourceDetail
  {
  public:
    AWS_IOTSITEWISE_API KendraSourceDetail();
    AWS_IOTSITEWISE_API KendraSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API KendraSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>knowledgeBaseArn</code> details for the Kendra dataset source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline KendraSourceDetail& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline KendraSourceDetail& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline KendraSourceDetail& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>roleARN</code> details for the Kendra dataset source.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline KendraSourceDetail& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline KendraSourceDetail& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline KendraSourceDetail& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
