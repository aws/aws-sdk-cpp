﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/ArtifactCategory.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the list artifacts operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifactsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListArtifactsRequest : public DeviceFarmRequest
  {
  public:
    ListArtifactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListArtifacts"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline ListArtifactsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline ListArtifactsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The run, job, suite, or test ARN.</p>
     */
    inline ListArtifactsRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline const ArtifactCategory& GetType() const{ return m_type; }

    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline void SetType(const ArtifactCategory& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline void SetType(ArtifactCategory&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline ListArtifactsRequest& WithType(const ArtifactCategory& value) { SetType(value); return *this;}

    /**
     * <p>The artifacts' type.</p> <p>Allowed values include:</p> <ul> <li> <p>FILE</p>
     * </li> <li> <p>LOG</p> </li> <li> <p>SCREENSHOT</p> </li> </ul>
     */
    inline ListArtifactsRequest& WithType(ArtifactCategory&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListArtifactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListArtifactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListArtifactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    ArtifactCategory m_type;
    bool m_typeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
