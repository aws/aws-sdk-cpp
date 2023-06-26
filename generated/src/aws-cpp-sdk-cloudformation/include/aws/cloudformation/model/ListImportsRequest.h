/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListImportsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListImportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImports"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline const Aws::String& GetExportName() const{ return m_exportName; }

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline bool ExportNameHasBeenSet() const { return m_exportNameHasBeenSet; }

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline void SetExportName(const Aws::String& value) { m_exportNameHasBeenSet = true; m_exportName = value; }

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline void SetExportName(Aws::String&& value) { m_exportNameHasBeenSet = true; m_exportName = std::move(value); }

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline void SetExportName(const char* value) { m_exportNameHasBeenSet = true; m_exportName.assign(value); }

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline ListImportsRequest& WithExportName(const Aws::String& value) { SetExportName(value); return *this;}

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline ListImportsRequest& WithExportName(Aws::String&& value) { SetExportName(std::move(value)); return *this;}

    /**
     * <p>The name of the exported output value. CloudFormation returns the stack names
     * that are importing this value.</p>
     */
    inline ListImportsRequest& WithExportName(const char* value) { SetExportName(value); return *this;}


    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output
     * value.</p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_exportName;
    bool m_exportNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
